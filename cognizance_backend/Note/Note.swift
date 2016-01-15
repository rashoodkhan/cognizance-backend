//
//  Note.swift
//  cognizance_backend
//
//  Created by Rashid Khan on 1/13/16.
//  Copyright © 2016 Cognizance. All rights reserved.
//

import Foundation
import EVReflection

class Note:EVObject {
  var title:String
  var dateCreated:NSTimeInterval
  var noteType:Int
  var text:String
  var cursorPosition:Point
  var author:String
  var tags:[String]
  var noteId:Int
  
  required init() {
    self.title = ""
    self.dateCreated = NSDate().timeIntervalSince1970
    self.noteType = 1
    self.text = ""
    let currentPoint = Point(x: 0, y: 0)
    self.cursorPosition = currentPoint
    self.author = ""
    self.tags = []
    self.noteId = 1
  }
  
  func getTitle() -> String {
    return self.title
  }
	
}

class Point {
  private var x:Int
  private var y:Int
  
  init(x:Int, y:Int) {
    self.x = x
    self.y = y
  }
  
  func getX() -> Int {
    return self.x
  }
  
  func getY() -> Int {
    return self.y
  }
  
  func updateCoordinates(x:Int, y:Int) {
    self.x = x
    self.y = y
  }
}