
#pragma once
#include "colecoes.hpp"
#include <vector>
#include <algorithm>

class Historico {
    std::vector<Medicao> leituras_;

public:
    void registrar(const Medicao& leitura) {
        leituras_.push_back(leitura);
    }

    std::size_t quantidade() const {
        return leituras_.size();
    }

    std::vector<Medicao> ultimas(std::size_t limite) const {
        std::size_t inicio =
            leituras_.size() > limite
                ? leituras_.size() - limite
                : 0;

        return std::vector<Medicao>(
            leituras_.begin() + inicio,
            leituras_.end()
        );
    }
};

