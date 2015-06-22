![Inti](https://github.com/NSElvis/Inti/blob/master/Images/cover.png)

[![Work in progress](https://img.shields.io/badge/status-work%20in%20progress-orange.svg)](https://github.com/NSElvis/Inti)

>**Inti**: Ancient Incan God, the [single source of all truth](http://en.wikipedia.org/wiki/Single_Source_of_Truth).

Inti is the first networking library with persistency in it's core, strongly inspired on [frameworks](http://rubyonrails.org/) that encourage [convention over configuration](http://en.wikipedia.org/wiki/Convention_over_configuration), Inti aims to be the simplest, fastest and most reliable networking library.

Inti provides full support for:

* Core Data Entity—driven networking methods, we use entities and their relationships to figure out your endpoints (routes)
* Full offline support, if your request is made offline, it will get replayed as soon as the device gets access to internet
* Additional layer of security and concurrency over Core Data, `POST`s, `PUT`s and `PATCH`s couldn't be more secure

## Installation

**Inti** will be available (eventually) through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

```ruby
pod 'Inti'
```
