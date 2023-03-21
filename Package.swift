// swift-tools-version:5.3
// The swift-tools-version declares the minimum version of Swift required to build this package.

import PackageDescription

let package = Package(
    name: "MGMushParser",
    platforms: [.iOS(.v9)],
    products: [
        .library(name: "MGMushParser", targets: ["MGMushParser"])
    ],
    dependencies: [],
    targets: [
        .target(
            name: "MGMushParser",
            dependencies: [], 
            path: "MGMushParser"
        )
    ]
)
