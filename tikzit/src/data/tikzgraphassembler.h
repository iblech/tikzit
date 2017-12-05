#ifndef TIKZGRAPHASSEMBLER_H
#define TIKZGRAPHASSEMBLER_H

#include "node.h"
#include "graph.h"

#include <QObject>
#include <QHash>

class TikzGraphAssembler : public QObject
{
    Q_OBJECT
public:
    explicit TikzGraphAssembler(Graph *graph, QObject *parent = 0);
    void addNodeToMap(Node *n);
    Node *nodeWithName(QString name);
    bool parse(const QString &tikz);

    Graph *graph() const;

signals:

public slots:

private:
    QHash<QString,Node*> _nodeMap;
    Graph *_graph;
    void *scanner;
};

#endif // TIKZGRAPHASSEMBLER_H