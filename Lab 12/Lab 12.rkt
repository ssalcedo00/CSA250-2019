#lang racket
(define func1
  (lambda (x y)
    (cond
      [(empty? x) (cons x y)]
      [else (first x)])))

(define new-list
  (lambda (w)
      (cons (first(rest(rest w))) (cons (first (rest w)) (cons (first w) (rest (rest (rest w))))))))

;Testing function1:
;> (function1 'a '()) => '()
;> (function1 'a '(one)) => '(a)
;> (function1 'a '(one () (three))) => '(a a a)

;Testing function2:
;> (function2 'b '(a b c)) => '(a b b c)
;> (function2 '((2 3)) '((1) ((2 3)) 4)) => '((1) ((2 3)) ((2 3)) (4))

