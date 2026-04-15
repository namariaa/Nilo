import type { NextConfig } from "next";

const nextConfig: NextConfig = {
  /* config options here */
};

module.exports = {
  basePath: '/Nilo' ,
  assetPrefix: '/Nilo/' ,
  images: {
    unoptimized: true, 
  },
};

export default nextConfig;
