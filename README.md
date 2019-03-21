# time

A lightweight time library and datatype for Carp.

## Installation

```clojure
(load "git@github.com:carpentry-org/time.carp@0.0.1")
```

## Usage

This library exports one important datatype, `Datetime`.

```clojure
(load "time.carp")

(defn main []
  (println* &(Datetime.strftime &(Datetime.now) "%Y-%m-%d %I:%M:%S.%n %p %z")))
```
