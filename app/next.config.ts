import type { NextConfig } from "next";

const nextConfig: NextConfig = {
  output: "export",
};

module.exports = {
  basePath: '/Nilo' ,
  assetPrefix: '/Nilo/' ,
  images: {
    unoptimized: true, 
  },
  output: "export",
};

export default nextConfig;
